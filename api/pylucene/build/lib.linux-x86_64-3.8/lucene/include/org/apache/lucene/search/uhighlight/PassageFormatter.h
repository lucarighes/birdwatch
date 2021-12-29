#ifndef org_apache_lucene_search_uhighlight_PassageFormatter_H
#define org_apache_lucene_search_uhighlight_PassageFormatter_H

#include "java/lang/Object.h"

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
          class Passage;
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

          class PassageFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_format_01bedfec1580d766,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageFormatter(const PassageFormatter& obj) : ::java::lang::Object(obj) {}

            PassageFormatter();

            ::java::lang::Object format(const JArray< ::org::apache::lucene::search::uhighlight::Passage > &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(PassageFormatter);
          extern PyTypeObject *PY_TYPE(PassageFormatter);

          class t_PassageFormatter {
          public:
            PyObject_HEAD
            PassageFormatter object;
            static PyObject *wrap_Object(const PassageFormatter&);
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
