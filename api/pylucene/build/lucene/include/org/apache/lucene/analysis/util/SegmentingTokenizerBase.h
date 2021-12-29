#ifndef org_apache_lucene_analysis_util_SegmentingTokenizerBase_H
#define org_apache_lucene_analysis_util_SegmentingTokenizerBase_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace text {
    class BreakIterator;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class SegmentingTokenizerBase : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_a55d72120f228769,
              mid_init$_ded1d67c698a538d,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_setNextSentence_438c62480c481c65,
              mid_incrementWord_8454bd5aa23fd11e,
              mid_isSafeEnd_540573ecd04ffc16,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SegmentingTokenizerBase(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SegmentingTokenizerBase(const SegmentingTokenizerBase& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SegmentingTokenizerBase(const ::java::text::BreakIterator &);
            SegmentingTokenizerBase(const ::org::apache::lucene::util::AttributeFactory &, const ::java::text::BreakIterator &);

            void end() const;
            jboolean incrementToken() const;
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(SegmentingTokenizerBase);
          extern PyTypeObject *PY_TYPE(SegmentingTokenizerBase);

          class t_SegmentingTokenizerBase {
          public:
            PyObject_HEAD
            SegmentingTokenizerBase object;
            static PyObject *wrap_Object(const SegmentingTokenizerBase&);
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
