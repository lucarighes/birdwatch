#ifndef org_apache_lucene_analysis_miscellaneous_DateRecognizerFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_DateRecognizerFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class DateFormat;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class DateRecognizerFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_6de1e28d9d10cd9e,
              mid_getDataFormat_0d08d070ecd6dd28,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateRecognizerFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DateRecognizerFilterFactory(const DateRecognizerFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *DATE_PATTERN;
            static ::java::lang::String *LOCALE;
            static ::java::lang::String *NAME;

            DateRecognizerFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::text::DateFormat getDataFormat(const ::java::lang::String &) const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(DateRecognizerFilterFactory);
          extern PyTypeObject *PY_TYPE(DateRecognizerFilterFactory);

          class t_DateRecognizerFilterFactory {
          public:
            PyObject_HEAD
            DateRecognizerFilterFactory object;
            static PyObject *wrap_Object(const DateRecognizerFilterFactory&);
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
