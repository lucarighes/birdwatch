#ifndef org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H
#define org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class AttributeSource;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace graph {

          class GraphTokenStreamFiniteStrings : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_articulationPoints_d2c45ef07a322466,
              mid_getFiniteStrings_233a192dadb0917d,
              mid_getFiniteStrings_90f1f3261af36bb3,
              mid_getTerms_d82aee015ceb4d93,
              mid_getTerms_1cc54f827c6ca728,
              mid_hasSidePath_a1d30e1ee40c89a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphTokenStreamFiniteStrings(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphTokenStreamFiniteStrings(const GraphTokenStreamFiniteStrings& obj) : ::java::lang::Object(obj) {}

            GraphTokenStreamFiniteStrings(const ::org::apache::lucene::analysis::TokenStream &);

            JArray< jint > articulationPoints() const;
            ::java::util::Iterator getFiniteStrings() const;
            ::java::util::Iterator getFiniteStrings(jint, jint) const;
            ::java::util::List getTerms(jint) const;
            JArray< ::org::apache::lucene::index::Term > getTerms(const ::java::lang::String &, jint) const;
            jboolean hasSidePath(jint) const;
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
      namespace util {
        namespace graph {
          extern PyType_Def PY_TYPE_DEF(GraphTokenStreamFiniteStrings);
          extern PyTypeObject *PY_TYPE(GraphTokenStreamFiniteStrings);

          class t_GraphTokenStreamFiniteStrings {
          public:
            PyObject_HEAD
            GraphTokenStreamFiniteStrings object;
            static PyObject *wrap_Object(const GraphTokenStreamFiniteStrings&);
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
