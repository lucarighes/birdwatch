#ifndef org_apache_lucene_codecs_uniformsplit_IndexDictionary_H
#define org_apache_lucene_codecs_uniformsplit_IndexDictionary_H

#include "org/apache/lucene/util/Accountable.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Browser;
          class BlockEncoder;
        }
      }
      namespace store {
        class DataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class IndexDictionary : public ::org::apache::lucene::util::Accountable {
           public:
            enum {
              mid_browser_f36d038b8a827a9e,
              mid_write_3925b6cced37a499,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexDictionary(jobject obj) : ::org::apache::lucene::util::Accountable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexDictionary(const IndexDictionary& obj) : ::org::apache::lucene::util::Accountable(obj) {}

            ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Browser browser() const;
            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IndexDictionary);
          extern PyTypeObject *PY_TYPE(IndexDictionary);

          class t_IndexDictionary {
          public:
            PyObject_HEAD
            IndexDictionary object;
            static PyObject *wrap_Object(const IndexDictionary&);
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
