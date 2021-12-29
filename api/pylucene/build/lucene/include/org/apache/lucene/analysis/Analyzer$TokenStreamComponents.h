#ifndef org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H
#define org_apache_lucene_analysis_Analyzer$TokenStreamComponents_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class Consumer;
    }
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Tokenizer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer$TokenStreamComponents : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e03fb874ecf6a8c0,
            mid_init$_2bc417f4e68b469c,
            mid_init$_747dea13ad55b145,
            mid_getSource_47b9b564aaded151,
            mid_getTokenStream_53a594dacf37f73d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$TokenStreamComponents(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer$TokenStreamComponents(const Analyzer$TokenStreamComponents& obj) : ::java::lang::Object(obj) {}

          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &);
          Analyzer$TokenStreamComponents(const ::org::apache::lucene::analysis::Tokenizer &, const ::org::apache::lucene::analysis::TokenStream &);
          Analyzer$TokenStreamComponents(const ::java::util::function::Consumer &, const ::org::apache::lucene::analysis::TokenStream &);

          ::java::util::function::Consumer getSource() const;
          ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer$TokenStreamComponents);
        extern PyTypeObject *PY_TYPE(Analyzer$TokenStreamComponents);

        class t_Analyzer$TokenStreamComponents {
        public:
          PyObject_HEAD
          Analyzer$TokenStreamComponents object;
          static PyObject *wrap_Object(const Analyzer$TokenStreamComponents&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
