#ifndef org_apache_lucene_search_spans_FilterSpans$AcceptStatus_H
#define org_apache_lucene_search_spans_FilterSpans$AcceptStatus_H

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
      namespace search {
        namespace spans {
          class FilterSpans$AcceptStatus;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class FilterSpans$AcceptStatus : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_1ab6f12de1949089,
              mid_values_fbbba3b65b96bea3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterSpans$AcceptStatus(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilterSpans$AcceptStatus(const FilterSpans$AcceptStatus& obj) : ::java::lang::Enum(obj) {}

            static FilterSpans$AcceptStatus *NO;
            static FilterSpans$AcceptStatus *NO_MORE_IN_CURRENT_DOC;
            static FilterSpans$AcceptStatus *YES;

            static FilterSpans$AcceptStatus valueOf(const ::java::lang::String &);
            static JArray< FilterSpans$AcceptStatus > values();
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
      namespace search {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(FilterSpans$AcceptStatus);
          extern PyTypeObject *PY_TYPE(FilterSpans$AcceptStatus);

          class t_FilterSpans$AcceptStatus {
          public:
            PyObject_HEAD
            FilterSpans$AcceptStatus object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FilterSpans$AcceptStatus *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FilterSpans$AcceptStatus&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FilterSpans$AcceptStatus&, PyTypeObject *);
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
