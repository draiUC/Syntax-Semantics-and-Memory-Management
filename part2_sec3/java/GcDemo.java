// Java: memory is allocated with "new" but never freed manually.
// The JVM's Garbage Collector (GC) reclaims heap objects automatically
// once they become unreachable.

public class GcDemo {

    static class Node {
        int id;
        byte[] payload = new byte[1_000_000]; // ~1MB per node, heap-allocated
        Node(int id) { this.id = id; }
    }

    public static void main(String[] args) throws InterruptedException {
        Runtime rt = Runtime.getRuntime();

        for (int i = 0; i < 5; i++) {
            Node n = new Node(i);                 // allocate ~1MB on the heap
            System.out.println("Created node " + n.id
                + " | used memory: " + usedMB(rt) + " MB");
            n = null;                             // drop the only reference
        }

        System.out.println("Requesting garbage collection...");
        System.gc();                              // request (not force) a GC pass
        Thread.sleep(200);                        // give the GC a moment to run
        System.out.println("After GC | used memory: " + usedMB(rt) + " MB");
    }

    static long usedMB(Runtime rt) {
        return (rt.totalMemory() - rt.freeMemory()) / (1024 * 1024);
    }
}
