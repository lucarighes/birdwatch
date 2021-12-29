#ifndef org_apache_lucene_codecs_uniformsplit_FSTDictionary$Builder_H
#define org_apache_lucene_codecs_uniformsplit_FSTDictionary$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Builder;
          class FSTDictionary;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class FSTDictionary$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_add_c61df66683b6c9c2,
              mid_build_3e292abbe69bc54a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTDictionary$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTDictionary$Builder(const FSTDictionary$Builder& obj) : ::java::lang::Object(obj) {}

            FSTDictionary$Builder();

            void add(const ::org::apache::lucene::util::BytesRef &, jlong) const;
            ::org::apache::lucene::codecs::uniformsplit::FSTDictionary build() const;
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
          extern PyType_Def PY_TYPE_DEF(FSTDictionary$Builder);
          extern PyTypeObject *PY_TYPE(FSTDictionary$Builder);

          class t_FSTDictionary$Builder {
          public:
            PyObject_HEAD
            FSTDictionary$Builder object;
            static PyObject *wrap_Object(const FSTDictionary$Builder&);
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
