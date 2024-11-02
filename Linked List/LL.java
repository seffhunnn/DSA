public class LL {
    Node head;
    class Node{
        String data;
        Node next;

        Node(String data){
            this.data=data;
            this.next=null;
        }
    }
    //add  -first
    public void addFirst(String data){
        Node newNode=new Node(data);
       if(head==null){
            head=newNode;
            return;
       }
       newNode.next=head;
       head=newNode;
    }

    //add -last
    public void addLast(String data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
            return;
        }
        Node currNode=head;
        while(currNode.next != null){
            currNode=currNode.next;
        }
        currNode.next=newNode;
    }

    //print
    public void printList(){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        Node currNode=head;
        while(currNode != null){
            System.out.print(currNode.data+" -> ");
            currNode=currNode.next;
        }
        System.out.println("NULL");

    }

    //delete first (if the whole list is empty it is called corner case)
    public void DeleteFirst(){
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        head=head.next;
    }

    //delete last
    public void DeleteLast(){
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        if(head.next==null){   //head.next=null-> lastNode =null
            head=null;
            return;
        }

        Node secLast=head;
        Node lastNode=head.next;
        while(lastNode.next!=null){
            lastNode=lastNode.next;
            secLast=secLast.next;
        }
        secLast.next=null;
    }


    public static void main(String[] args) {
        LL list= new LL();
        list.addFirst("a");
        list.addFirst("is");
        list.printList();

        list.addLast("list");
        list.printList();

        list.addFirst("that");
        list.printList();

        list.DeleteFirst();
        list.printList();

        list.DeleteLast();
        list.printList();

    }

}
