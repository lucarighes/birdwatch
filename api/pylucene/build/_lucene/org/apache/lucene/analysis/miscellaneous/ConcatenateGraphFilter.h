#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace lang {
    class Class;
    class Character;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
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

          class ConcatenateGraphFilter : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_ad87d1e05b471ca5,
              mid_init$_43bd57fb29937546,
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_toAutomaton_d9f5c446a29ec187,
              mid_toAutomaton_2dfd31606da6dbf0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenateGraphFilter(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenateGraphFilter(const ConcatenateGraphFilter& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            static jint DEFAULT_MAX_GRAPH_EXPANSIONS;
            static jboolean DEFAULT_PRESERVE_POSITION_INCREMENTS;
            static jboolean DEFAULT_PRESERVE_SEP;
            static ::java::lang::Character *DEFAULT_TOKEN_SEPARATOR;
            static jint SEP_LABEL;

            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::Character &, jboolean, jint);
            ConcatenateGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, jboolean, jint);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ConcatenateGraphFilter);
          extern PyTypeObject *PY_TYPE(ConcatenateGraphFilter);

          class t_ConcatenateGraphFilter {
          public:
            PyObject_HEAD
            ConcatenateGraphFilter object;
            static PyObject *wrap_Object(const ConcatenateGraphFilter&);
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
