#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class ArrayList;
    class NavigableSet;
    class Enumeration;
    class Iterator;
    class ListIterator;
    class NavigableMap;
    class List;
    class Queue;
    class SortedMap;
    class Deque;
    class Set;
    class Random;
    class SortedSet;
    class Comparator;
  }
  namespace lang {
    class Boolean;
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
     public:
      enum {
        mid_addAll_b633b5831963bba7,
        mid_asLifoQueue_92007579fe249b3b,
        mid_binarySearch_f67918463bbb76f0,
        mid_binarySearch_f65eba44a0ba07dc,
        mid_checkedCollection_5daa7c9c1e614e1a,
        mid_checkedList_c2ef094a17878f20,
        mid_checkedMap_a2c847d1e81cf7b3,
        mid_checkedNavigableMap_6a7149dc196878d1,
        mid_checkedNavigableSet_f516efffaf805047,
        mid_checkedQueue_41aec1c14e8f7f56,
        mid_checkedSet_e6675b276e8a7281,
        mid_checkedSortedMap_94d32f2093ffa555,
        mid_checkedSortedSet_ee02c92e5fb9000f,
        mid_copy_c734de9369b606d5,
        mid_disjoint_db84e57f676489cd,
        mid_emptyEnumeration_f270cc1d2d4072a8,
        mid_emptyIterator_233a192dadb0917d,
        mid_emptyList_49ec78390f08338a,
        mid_emptyListIterator_78bda7a3d01214c3,
        mid_emptyMap_1c3426541413a55d,
        mid_emptyNavigableMap_4e7fc959a77f584b,
        mid_emptyNavigableSet_69a674c200eed505,
        mid_emptySet_7dcf4034c6d1a92a,
        mid_emptySortedMap_6f76a11938f36d19,
        mid_emptySortedSet_bb1217b78e9e3e5c,
        mid_enumeration_4f73bc20ec05226d,
        mid_fill_ce22b87b2936d259,
        mid_frequency_35ac1472e94be03d,
        mid_indexOfSubList_8d58b8abacc3b86f,
        mid_lastIndexOfSubList_8d58b8abacc3b86f,
        mid_list_736de96876b2a289,
        mid_max_f186668b4e43c778,
        mid_max_e812842d5eefd381,
        mid_min_f186668b4e43c778,
        mid_min_e812842d5eefd381,
        mid_nCopies_de0bd0ab49368464,
        mid_newSetFromMap_48d1d2a8bdb96468,
        mid_replaceAll_900e5df6bfdb75ed,
        mid_reverse_d03990be0130160d,
        mid_reverseOrder_beb0414e0ec1de00,
        mid_reverseOrder_5cea92c6ee384471,
        mid_rotate_cb20ac649a48d6c8,
        mid_shuffle_d03990be0130160d,
        mid_shuffle_64fb82685bb435be,
        mid_singleton_0c5a198306f28758,
        mid_singletonList_879558f08e80c948,
        mid_singletonMap_7302505887fe5ce8,
        mid_sort_d03990be0130160d,
        mid_sort_268544ec58d67b6d,
        mid_swap_f66f598992b61427,
        mid_synchronizedCollection_5a3c20858bae1d1c,
        mid_synchronizedList_e420eeaadf0bcd20,
        mid_synchronizedMap_b4d2b6b21eea71e8,
        mid_synchronizedNavigableMap_10fd75936e2c13e5,
        mid_synchronizedNavigableSet_2a8f8e58266516ed,
        mid_synchronizedSet_3abff4437b3c01c0,
        mid_synchronizedSortedMap_34b271f60d961331,
        mid_synchronizedSortedSet_5ab2607b2067b822,
        mid_unmodifiableCollection_5a3c20858bae1d1c,
        mid_unmodifiableList_e420eeaadf0bcd20,
        mid_unmodifiableMap_b4d2b6b21eea71e8,
        mid_unmodifiableNavigableMap_10fd75936e2c13e5,
        mid_unmodifiableNavigableSet_2a8f8e58266516ed,
        mid_unmodifiableSet_3abff4437b3c01c0,
        mid_unmodifiableSortedMap_34b271f60d961331,
        mid_unmodifiableSortedSet_5ab2607b2067b822,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collections(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collections(const Collections& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *EMPTY_LIST;
      static ::java::util::Map *EMPTY_MAP;
      static ::java::util::Set *EMPTY_SET;

      static jboolean addAll(const ::java::util::Collection &, const JArray< ::java::lang::Object > &);
      static ::java::util::Queue asLifoQueue(const ::java::util::Deque &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static ::java::util::Collection checkedCollection(const ::java::util::Collection &, const ::java::lang::Class &);
      static ::java::util::List checkedList(const ::java::util::List &, const ::java::lang::Class &);
      static ::java::util::Map checkedMap(const ::java::util::Map &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableMap checkedNavigableMap(const ::java::util::NavigableMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableSet checkedNavigableSet(const ::java::util::NavigableSet &, const ::java::lang::Class &);
      static ::java::util::Queue checkedQueue(const ::java::util::Queue &, const ::java::lang::Class &);
      static ::java::util::Set checkedSet(const ::java::util::Set &, const ::java::lang::Class &);
      static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet &, const ::java::lang::Class &);
      static void copy(const ::java::util::List &, const ::java::util::List &);
      static jboolean disjoint(const ::java::util::Collection &, const ::java::util::Collection &);
      static ::java::util::Enumeration emptyEnumeration();
      static ::java::util::Iterator emptyIterator();
      static ::java::util::List emptyList();
      static ::java::util::ListIterator emptyListIterator();
      static ::java::util::Map emptyMap();
      static ::java::util::NavigableMap emptyNavigableMap();
      static ::java::util::NavigableSet emptyNavigableSet();
      static ::java::util::Set emptySet();
      static ::java::util::SortedMap emptySortedMap();
      static ::java::util::SortedSet emptySortedSet();
      static ::java::util::Enumeration enumeration(const ::java::util::Collection &);
      static void fill(const ::java::util::List &, const ::java::lang::Object &);
      static jint frequency(const ::java::util::Collection &, const ::java::lang::Object &);
      static jint indexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static jint lastIndexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static ::java::util::ArrayList list(const ::java::util::Enumeration &);
      static ::java::lang::Object max$(const ::java::util::Collection &);
      static ::java::lang::Object max$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::lang::Object min$(const ::java::util::Collection &);
      static ::java::lang::Object min$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::util::List nCopies(jint, const ::java::lang::Object &);
      static ::java::util::Set newSetFromMap(const ::java::util::Map &);
      static jboolean replaceAll(const ::java::util::List &, const ::java::lang::Object &, const ::java::lang::Object &);
      static void reverse(const ::java::util::List &);
      static ::java::util::Comparator reverseOrder();
      static ::java::util::Comparator reverseOrder(const ::java::util::Comparator &);
      static void rotate(const ::java::util::List &, jint);
      static void shuffle(const ::java::util::List &);
      static void shuffle(const ::java::util::List &, const ::java::util::Random &);
      static ::java::util::Set singleton(const ::java::lang::Object &);
      static ::java::util::List singletonList(const ::java::lang::Object &);
      static ::java::util::Map singletonMap(const ::java::lang::Object &, const ::java::lang::Object &);
      static void sort(const ::java::util::List &);
      static void sort(const ::java::util::List &, const ::java::util::Comparator &);
      static void swap(const ::java::util::List &, jint, jint);
      static ::java::util::Collection synchronizedCollection(const ::java::util::Collection &);
      static ::java::util::List synchronizedList(const ::java::util::List &);
      static ::java::util::Map synchronizedMap(const ::java::util::Map &);
      static ::java::util::NavigableMap synchronizedNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet synchronizedNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set synchronizedSet(const ::java::util::Set &);
      static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet &);
      static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection &);
      static ::java::util::List unmodifiableList(const ::java::util::List &);
      static ::java::util::Map unmodifiableMap(const ::java::util::Map &);
      static ::java::util::NavigableMap unmodifiableNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet unmodifiableNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set unmodifiableSet(const ::java::util::Set &);
      static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collections);
    extern PyTypeObject *PY_TYPE(Collections);

    class t_Collections {
    public:
      PyObject_HEAD
      Collections object;
      static PyObject *wrap_Object(const Collections&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
