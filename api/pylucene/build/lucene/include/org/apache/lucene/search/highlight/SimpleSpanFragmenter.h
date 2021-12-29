#ifndef org_apache_lucene_search_highlight_SimpleSpanFragmenter_H
#define org_apache_lucene_search_highlight_SimpleSpanFragmenter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class QueryScorer;
          class Fragmenter;
        }
      }
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
      namespace search {
        namespace highlight {

          class SimpleSpanFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_856425164711f893,
              mid_init$_88068c992b4d669e,
              mid_isNewFragment_8454bd5aa23fd11e,
              mid_start_c5ab6d211d8d31bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleSpanFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleSpanFragmenter(const SimpleSpanFragmenter& obj) : ::java::lang::Object(obj) {}

            SimpleSpanFragmenter(const ::org::apache::lucene::search::highlight::QueryScorer &);
            SimpleSpanFragmenter(const ::org::apache::lucene::search::highlight::QueryScorer &, jint);

            jboolean isNewFragment() const;
            void start(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(SimpleSpanFragmenter);
          extern PyTypeObject *PY_TYPE(SimpleSpanFragmenter);

          class t_SimpleSpanFragmenter {
          public:
            PyObject_HEAD
            SimpleSpanFragmenter object;
            static PyObject *wrap_Object(const SimpleSpanFragmenter&);
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
