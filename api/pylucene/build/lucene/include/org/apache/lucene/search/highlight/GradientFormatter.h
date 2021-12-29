#ifndef org_apache_lucene_search_highlight_GradientFormatter_H
#define org_apache_lucene_search_highlight_GradientFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Formatter;
          class TokenGroup;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class GradientFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_83fb09b4857a051b,
              mid_hexToInt_a5a7d1128e9e2bb7,
              mid_highlightTerm_89cd75f77d741eb4,
              mid_getForegroundColorString_64158b2ec62ced09,
              mid_getBackgroundColorString_64158b2ec62ced09,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GradientFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GradientFormatter(const GradientFormatter& obj) : ::java::lang::Object(obj) {}

            GradientFormatter(jfloat, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            static jint hexToInt(const ::java::lang::String &);
            ::java::lang::String highlightTerm(const ::java::lang::String &, const ::org::apache::lucene::search::highlight::TokenGroup &) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(GradientFormatter);
          extern PyTypeObject *PY_TYPE(GradientFormatter);

          class t_GradientFormatter {
          public:
            PyObject_HEAD
            GradientFormatter object;
            static PyObject *wrap_Object(const GradientFormatter&);
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
