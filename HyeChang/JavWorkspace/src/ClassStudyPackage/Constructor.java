package ClassStudyPackage;
public class Constructor {
    public static void main(String[] args) {

        BlackBox b1 = new BlackBox();
        b1.modelName = "까망이";
        b1.resolution = "FHD";
        b1.price = 200000;
        b1.color = "블랙";
        System.out.println(b1.modelName);
        System.out.println(b1.serialNumber);

        System.out.println("----------------------");

        BlackBox b2 = new BlackBox("하양이", "UHD", 300000, "White");
        System.out.println(b2.modelName);
        System.out.println(b2.serialNumber);
    }
}