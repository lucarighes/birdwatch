#ifndef org_apache_lucene_search_uhighlight_DefaultPassageFormatter_H
#define org_apache_lucene_search_uhighlight_DefaultPassageFormatter_H

#include "org/apache/lucene/search/uhighlight/PassageFormatter.h"

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

          class DefaultPassageFormatter : public ::org::apache::lucene::search::uhighlight::PassageFormatter {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_6607eb3ac86b07dd,
              mid_format_44f2dac6ac374d38,
              mid_append_c46ff263052534fb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultPassageFormatter(jobject obj) : ::org::apache::lucene::search::uhighlight::PassageFormatter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultPassageFormatter(const DefaultPassageFormatter& obj) : ::org::apache::lucene::search::uhighlight::PassageFormatter(obj) {}

            DefaultPassageFormatter();
            DefaultPassageFormatter(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean);

            ::java::lang::String format(const JArray< ::org::apache::lucene::search::uhighlight::Passage > &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(DefaultPassageFormatter);
          extern PyTypeObject *PY_TYPE(DefaultPassageFormatter);

          class t_DefaultPassageFormatter {
          public:
            PyObject_HEAD
            DefaultPassageFormatter object;
            static PyObject *wrap_Object(const DefaultPassageFormatter&);
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
