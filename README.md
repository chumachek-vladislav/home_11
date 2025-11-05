[Scheme.drawio](https://github.com/user-attachments/files/23364190/Scheme.drawio)# Домашнее задание к работе 11

## Условие задачи
6) Вычислите с использованием цикла for значение ряда, для заданных пользователем значений а и n
   a(a-n)(a-2n) … (a-n2)

## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. Объявить переменные:
   -n
   -arr[MAX-SIZE]
3. Объявить переменные для накопления суммы и счета ненулевых элементов:
   -sum
   -count
4. Цикл for (ввод элементов массива):
   for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] != 0) {
            sum += arr[i];
            count++;  }
    }
5. Проверка ненулевых элементов и вычисление среднего арифметического:
   
         if (count == 0) {
         printf("В массиве нет ненулевых элементов\n");
         }
         else {double avg = (double)sum / count;
         printf("Среднее арифметическое (без нулевых элементов): %.2f\n", avg);
         }
6. Вывод результата:
   -printf("Среднее арифметическое (без нулевых элементов): %.2f\n", avg);
7. **Конец**

### Блок-схема
<img width="719" height="701" alt="Scheme drawio (2)" src="https://github.com/user-attachments/assets/91368530-0070-47aa-a005-97c859dbaf44" />
[Upl<mxfile host="app.diagrams.net" agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 YaBrowser/25.8.0.0 Safari/537.36" version="28.2.7">
  <diagram name="Страница — 1" id="za5ToB8gzqoUWoJ_1ICk">
    <mxGraphModel dx="1426" dy="736" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="RxJPcyas4QEvO1zb6-KG-1" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" parent="1" source="pUB3tPddi0v5ZQVMPjBD-2" target="pUB3tPddi0v5ZQVMPjBD-3" edge="1">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="pUB3tPddi0v5ZQVMPjBD-2" value="Начало" style="ellipse;whiteSpace=wrap;html=1;" parent="1" vertex="1">
          <mxGeometry x="340" y="10" width="120" height="80" as="geometry" />
        </mxCell>
        <mxCell id="RxJPcyas4QEvO1zb6-KG-4" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" parent="1" source="pUB3tPddi0v5ZQVMPjBD-3" target="RxJPcyas4QEvO1zb6-KG-3" edge="1">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="pUB3tPddi0v5ZQVMPjBD-3" value="n,&amp;nbsp;arr[MAX_SIZE]" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;" parent="1" vertex="1">
          <mxGeometry x="340" y="110" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="RxJPcyas4QEvO1zb6-KG-10" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" parent="1" source="RxJPcyas4QEvO1zb6-KG-3" edge="1">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="290" y="250" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-8" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="RxJPcyas4QEvO1zb6-KG-3" target="ROpijiGo0sHrS8PtN-9x-6">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="RxJPcyas4QEvO1zb6-KG-3" value="n&amp;gt;MAX_SIZE?&lt;div&gt;n&amp;lt;=0?&lt;/div&gt;" style="html=1;whiteSpace=wrap;aspect=fixed;shape=isoRectangle;" parent="1" vertex="1">
          <mxGeometry x="325" y="205" width="150" height="90" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-4" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" target="RxJPcyas4QEvO1zb6-KG-8">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="230" y="280" as="sourcePoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="RxJPcyas4QEvO1zb6-KG-8" value="Конец" style="ellipse;whiteSpace=wrap;html=1;" parent="1" vertex="1">
          <mxGeometry x="170" y="630" width="120" height="80" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-1" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1" source="pUB3tPddi0v5ZQVMPjBD-2" target="pUB3tPddi0v5ZQVMPjBD-2">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-9" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-6" target="ROpijiGo0sHrS8PtN-9x-7">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-6" value="sum = 0&lt;div&gt;count = 0&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="500" y="220" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-19" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-7" target="ROpijiGo0sHrS8PtN-9x-10">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-25" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-7">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="630" y="390" as="targetPoint" />
            <Array as="points">
              <mxPoint x="630" y="350" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-7" value="i&amp;lt;n?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="520" y="310" width="80" height="80" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-17" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-10" target="ROpijiGo0sHrS8PtN-9x-14">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="470" y="380" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-10" value="count ==0?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="370" y="340" width="80" height="80" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-13" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" target="RxJPcyas4QEvO1zb6-KG-8">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="230" y="510" as="sourcePoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-12" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0.167;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-10">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="330" y="460.02" as="targetPoint" />
            <Array as="points">
              <mxPoint x="330" y="380" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-16" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-14" target="ROpijiGo0sHrS8PtN-9x-15">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-14" value="avg = (double)sum / count" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="414" y="450" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-18" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-15" target="RxJPcyas4QEvO1zb6-KG-8">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="430" y="670" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-15" value="printf(&quot;Среднее&lt;div&gt;&amp;nbsp;арифметическое: %.2f\n&quot;, avg)&lt;/div&gt;" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="387" y="540" width="174" height="70" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-20" value="printf(&quot;Некорректный размер массива\n&quot;)" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="100" y="220" width="200" height="60" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-21" value="printf(&quot;В массиве нет ненулевых элементов\n&quot;)" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="240" y="460" width="167" height="50" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-22" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.908;entryY=0.225;entryDx=0;entryDy=0;entryPerimeter=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-21" target="RxJPcyas4QEvO1zb6-KG-8">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-26" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-23" target="ROpijiGo0sHrS8PtN-9x-24">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-23" value="&amp;nbsp;scanf(&quot;%d&quot;, &amp;amp;arr[i])" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="560" y="390" width="131" height="40" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-30" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0;entryY=0.75;entryDx=0;entryDy=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-24" target="ROpijiGo0sHrS8PtN-9x-27">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="625.5" y="680" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-31" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-24" target="ROpijiGo0sHrS8PtN-9x-28">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-24" value="arr[i] !=0?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="585.5" y="450" width="80" height="80" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-29" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-27" target="ROpijiGo0sHrS8PtN-9x-7">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="800" y="350" as="targetPoint" />
            <Array as="points">
              <mxPoint x="810" y="670" />
              <mxPoint x="810" y="340" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-27" value="i++" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="680" y="642.5" width="70" height="55" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-32" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="ROpijiGo0sHrS8PtN-9x-28" target="ROpijiGo0sHrS8PtN-9x-27">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="ROpijiGo0sHrS8PtN-9x-28" value="sum += arr[i]&lt;div&gt;count++&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="665.5" y="540" width="120" height="60" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
oading Scheme.drawio…]()


## 2. Реализация программы
#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 100 

int main() {
    setlocale(LC_CTYPE, "");
    int n;
    printf("Введите количество элементов массива (не более 100): ");
    scanf("%d", &n);
    int arr[MAX_SIZE];

    if (n > MAX_SIZE || n <= 0) {
        printf("Некорректный размер массива\n");
        return 1;
    }

    int sum = 0;
    int count = 0;

    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] != 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) {
        printf("В массиве нет ненулевых элементов\n");
    }
    else {
        double avg = (double)sum / count;
        printf("Среднее арифметическое (без нулевых элементов): %.2f\n", avg);
    }

    system("pause");
    return 0;
}
## 3. Результаты работы программы
Введите количество элементов массива (не более 100): 5
Введите 5 целых чисел:
-4
-2
10
15
3
Среднее арифметическое (без нулевых элементов): 4.40
Для продолжения нажмите любую клавишу . . .

## 4. Информация о разработчике
Чумачек Владислав, бИЦ-252
