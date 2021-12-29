#ifndef org_apache_lucene_codecs_lucene50_Lucene50StoredFieldsFormat$Mode_H
#define org_apache_lucene_codecs_lucene50_Lucene50StoredFieldsFormat$Mode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene50 {
          class Lucene50StoredFieldsFormat$Mode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene50 {

          class Lucene50StoredFieldsFormat$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_afc18df556bafe08,
              mid_values_e86668c4769d7370,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene50StoredFieldsFormat$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50StoredFieldsFormat$Mode(const Lucene50StoredFieldsFormat$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene50StoredFieldsFormat$Mode *BEST_COMPRESSION;
            static Lucene50StoredFieldsFormat$Mode *BEST_SPEED;

            static Lucene50StoredFieldsFormat$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene50StoredFieldsFormat$Mode > values();
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
          extern PyType_Def PY_TYPE_DEF(Lucene50StoredFieldsFormat$Mode);
          extern PyTypeObject *PY_TYPE(Lucene50StoredFieldsFormat$Mode);

          class t_Lucene50StoredFieldsFormat$Mode {
          public:
            PyObject_HEAD
            Lucene50StoredFieldsFormat$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene50StoredFieldsFormat$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene50StoredFieldsFormat$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene50StoredFieldsFormat$Mode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
