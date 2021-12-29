#ifndef org_apache_lucene_search_suggest_fst_ExternalRefSorter_H
#define org_apache_lucene_search_suggest_fst_ExternalRefSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            class BytesRefSorter;
          }
        }
      }
      namespace util {
        class BytesRefIterator;
        class OfflineSorter;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class ExternalRefSorter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_d34a8c39d1671d76,
                mid_add_0bdfd2603b7490a8,
                mid_close_f2cc1bce94666404,
                mid_getComparator_beb0414e0ec1de00,
                mid_iterator_5416289139cf0b84,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ExternalRefSorter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ExternalRefSorter(const ExternalRefSorter& obj) : ::java::lang::Object(obj) {}

              ExternalRefSorter(const ::org::apache::lucene::util::OfflineSorter &);

              void add(const ::org::apache::lucene::util::BytesRef &) const;
              void close() const;
              ::java::util::Comparator getComparator() const;
              ::org::apache::lucene::util::BytesRefIterator iterator() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(ExternalRefSorter);
            extern PyTypeObject *PY_TYPE(ExternalRefSorter);

            class t_ExternalRefSorter {
            public:
              PyObject_HEAD
              ExternalRefSorter object;
              static PyObject *wrap_Object(const ExternalRefSorter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
