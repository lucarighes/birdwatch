#ifndef org_apache_lucene_analysis_standard_ClassicTokenizer_H
#define org_apache_lucene_analysis_standard_ClassicTokenizer_H

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
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class ClassicTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_a55a4d78167a7843,
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_getMaxTokenLength_9972fcc56b44e79d,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_setMaxTokenLength_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicTokenizer(const ClassicTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ACRONYM;
            static jint ACRONYM_DEP;
            static jint ALPHANUM;
            static jint APOSTROPHE;
            static jint CJ;
            static jint COMPANY;
            static jint EMAIL;
            static jint HOST;
            static jint NUM;
            static JArray< ::java::lang::String > *TOKEN_TYPES;

            ClassicTokenizer();
            ClassicTokenizer(const ::org::apache::lucene::util::AttributeFactory &);

            void close() const;
            void end() const;
            jint getMaxTokenLength() const;
            jboolean incrementToken() const;
            void reset() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(ClassicTokenizer);
          extern PyTypeObject *PY_TYPE(ClassicTokenizer);

          class t_ClassicTokenizer {
          public:
            PyObject_HEAD
            ClassicTokenizer object;
            static PyObject *wrap_Object(const ClassicTokenizer&);
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
