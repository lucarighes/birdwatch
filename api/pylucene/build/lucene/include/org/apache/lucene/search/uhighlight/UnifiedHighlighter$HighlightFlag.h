#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter$HighlightFlag_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter$HighlightFlag_H

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
        namespace uhighlight {
          class UnifiedHighlighter$HighlightFlag;
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
        namespace uhighlight {

          class UnifiedHighlighter$HighlightFlag : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_993ff5ab1d3ad093,
              mid_values_bf05145965707a13,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter$HighlightFlag(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter$HighlightFlag(const UnifiedHighlighter$HighlightFlag& obj) : ::java::lang::Enum(obj) {}

            static UnifiedHighlighter$HighlightFlag *MULTI_TERM_QUERY;
            static UnifiedHighlighter$HighlightFlag *PASSAGE_RELEVANCY_OVER_SPEED;
            static UnifiedHighlighter$HighlightFlag *PHRASES;
            static UnifiedHighlighter$HighlightFlag *WEIGHT_MATCHES;

            static UnifiedHighlighter$HighlightFlag valueOf(const ::java::lang::String &);
            static JArray< UnifiedHighlighter$HighlightFlag > values();
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter$HighlightFlag);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter$HighlightFlag);

          class t_UnifiedHighlighter$HighlightFlag {
          public:
            PyObject_HEAD
            UnifiedHighlighter$HighlightFlag object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UnifiedHighlighter$HighlightFlag *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UnifiedHighlighter$HighlightFlag&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UnifiedHighlighter$HighlightFlag&, PyTypeObject *);
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
