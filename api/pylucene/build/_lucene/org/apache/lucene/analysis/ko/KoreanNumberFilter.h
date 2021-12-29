#ifndef org_apache_lucene_analysis_ko_KoreanNumberFilter_H
#define org_apache_lucene_analysis_ko_KoreanNumberFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
        namespace ko {

          class KoreanNumberFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_isArabicNumeral_540573ecd04ffc16,
              mid_isNumeral_145b2d0af0c06b93,
              mid_isNumeral_540573ecd04ffc16,
              mid_isNumeralPunctuation_145b2d0af0c06b93,
              mid_isNumeralPunctuation_540573ecd04ffc16,
              mid_normalizeNumber_9bfa75c9f141b67f,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanNumberFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanNumberFilter(const KoreanNumberFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            KoreanNumberFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            jboolean isArabicNumeral(jchar) const;
            jboolean isNumeral(const ::java::lang::String &) const;
            jboolean isNumeral(jchar) const;
            jboolean isNumeralPunctuation(const ::java::lang::String &) const;
            jboolean isNumeralPunctuation(jchar) const;
            ::java::lang::String normalizeNumber(const ::java::lang::String &) const;
            void reset() const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanNumberFilter);
          extern PyTypeObject *PY_TYPE(KoreanNumberFilter);

          class t_KoreanNumberFilter {
          public:
            PyObject_HEAD
            KoreanNumberFilter object;
            static PyObject *wrap_Object(const KoreanNumberFilter&);
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
