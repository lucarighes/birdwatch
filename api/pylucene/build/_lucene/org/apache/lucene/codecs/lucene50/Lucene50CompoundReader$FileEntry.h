#ifndef org_apache_lucene_codecs_lucene50_Lucene50CompoundReader$FileEntry_H
#define org_apache_lucene_codecs_lucene50_Lucene50CompoundReader$FileEntry_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene50 {

          class Lucene50CompoundReader$FileEntry : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene50CompoundReader$FileEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50CompoundReader$FileEntry(const Lucene50CompoundReader$FileEntry& obj) : ::java::lang::Object(obj) {}

            Lucene50CompoundReader$FileEntry();
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
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50CompoundReader$FileEntry);
          extern PyTypeObject *PY_TYPE(Lucene50CompoundReader$FileEntry);

          class t_Lucene50CompoundReader$FileEntry {
          public:
            PyObject_HEAD
            Lucene50CompoundReader$FileEntry object;
            static PyObject *wrap_Object(const Lucene50CompoundReader$FileEntry&);
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
