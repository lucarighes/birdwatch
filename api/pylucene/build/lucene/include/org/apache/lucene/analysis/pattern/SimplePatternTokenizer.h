#ifndef org_apache_lucene_analysis_pattern_SimplePatternTokenizer_H
#define org_apache_lucene_analysis_pattern_SimplePatternTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace pattern {

          class SimplePatternTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_9fd2eb66a64e6f0f,
              mid_init$_06c1b4541f684199,
              mid_init$_f84c6abc4ac25b63,
              mid_init$_10e85ca44ef866b2,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternTokenizer(const SimplePatternTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SimplePatternTokenizer(const ::java::lang::String &);
            SimplePatternTokenizer(const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::lang::String &, jint);

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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(SimplePatternTokenizer);
          extern PyTypeObject *PY_TYPE(SimplePatternTokenizer);

          class t_SimplePatternTokenizer {
          public:
            PyObject_HEAD
            SimplePatternTokenizer object;
            static PyObject *wrap_Object(const SimplePatternTokenizer&);
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
