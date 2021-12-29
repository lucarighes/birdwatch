#ifndef org_apache_lucene_analysis_ja_JapanesePartOfSpeechStopFilter_H
#define org_apache_lucene_analysis_ja_JapanesePartOfSpeechStopFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
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
        namespace ja {

          class JapanesePartOfSpeechStopFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_59f4cbc95aff88bf,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapanesePartOfSpeechStopFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapanesePartOfSpeechStopFilter(const JapanesePartOfSpeechStopFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            JapanesePartOfSpeechStopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapanesePartOfSpeechStopFilter);
          extern PyTypeObject *PY_TYPE(JapanesePartOfSpeechStopFilter);

          class t_JapanesePartOfSpeechStopFilter {
          public:
            PyObject_HEAD
            JapanesePartOfSpeechStopFilter object;
            static PyObject *wrap_Object(const JapanesePartOfSpeechStopFilter&);
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
