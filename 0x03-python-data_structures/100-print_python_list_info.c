#include <listobject.h>
#include <object.h>
#include <python.h>

void print_python_list_info(PyObject *p)
{
	long int size = Pylist_Size(p);
	int i;
	PylistObject *obj = (pylistobject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE (obj->ob_item[i])->tp_name);
}
