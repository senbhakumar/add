+#include <stdio.h>
+#include<conio.h>
+void main()
+{
+int a[50],n,i,min;
+printf("enter no of elements:");
+scanf("%d",&n);
+for(i=0;i<n;i++)
+{
+scanf("%d",&a[i]);
+}
+min=a[0];
+for(i=1;i<n;i++)
+{
+if (a[i]< min)
+{
+min= a[i];
+}
+}
+printf("%d",min);
+getch();
+}
