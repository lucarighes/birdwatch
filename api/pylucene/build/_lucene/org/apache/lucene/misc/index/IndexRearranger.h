#ifndef org_apache_lucene_misc_index_IndexRearranger_H
#define org_apache_lucene_misc_index_IndexRearranger_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Exception;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriterConfig;
      }
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
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

          class IndexRearranger : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d36f42a0428d0d5f,
              mid_execute_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexRearranger(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexRearranger(const IndexRearranger& obj) : ::java::lang::Object(obj) {}

            IndexRearranger(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::java::util::List &);

            void execute() const;
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
          extern PyType_Def PY_TYPE_DEF(IndexRearranger);
          extern PyTypeObject *PY_TYPE(IndexRearranger);

          class t_IndexRearranger {
          public:
            PyObject_HEAD
            IndexRearranger object;
            static PyObject *wrap_Object(const IndexRearranger&);
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
