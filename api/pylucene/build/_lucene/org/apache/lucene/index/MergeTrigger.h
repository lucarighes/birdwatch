#ifndef org_apache_lucene_index_MergeTrigger_H
#define org_apache_lucene_index_MergeTrigger_H

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
      namespace index {
        class MergeTrigger;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeTrigger : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_aee4c9132eff43b3,
            mid_values_4367128e2a231fa9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeTrigger(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeTrigger(const MergeTrigger& obj) : ::java::lang::Enum(obj) {}

          static MergeTrigger *CLOSING;
          static MergeTrigger *COMMIT;
          static MergeTrigger *EXPLICIT;
          static MergeTrigger *FULL_FLUSH;
          static MergeTrigger *GET_READER;
          static MergeTrigger *MERGE_FINISHED;
          static MergeTrigger *SEGMENT_FLUSH;

          static MergeTrigger valueOf(const ::java::lang::String &);
          static JArray< MergeTrigger > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergeTrigger);
        extern PyTypeObject *PY_TYPE(MergeTrigger);

        class t_MergeTrigger {
        public:
          PyObject_HEAD
          MergeTrigger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MergeTrigger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MergeTrigger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MergeTrigger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
