#ifndef org_apache_lucene_misc_index_IndexRearranger$DocumentSelector_H
#define org_apache_lucene_misc_index_IndexRearranger$DocumentSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
      }
      namespace index {
        class CodecReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class IndexRearranger$DocumentSelector : public ::java::lang::Object {
           public:
            enum {
              mid_getFilteredLiveDocs_f08bfd32ceb5c39a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexRearranger$DocumentSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexRearranger$DocumentSelector(const IndexRearranger$DocumentSelector& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BitSet getFilteredLiveDocs(const ::org::apache::lucene::index::CodecReader &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(IndexRearranger$DocumentSelector);
          extern PyTypeObject *PY_TYPE(IndexRearranger$DocumentSelector);

          class t_IndexRearranger$DocumentSelector {
          public:
            PyObject_HEAD
            IndexRearranger$DocumentSelector object;
            static PyObject *wrap_Object(const IndexRearranger$DocumentSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
