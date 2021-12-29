#ifndef org_apache_lucene_search_spans_SpanNearQuery$Builder_H
#define org_apache_lucene_search_spans_SpanNearQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanNearQuery$Builder;
          class SpanQuery;
          class SpanNearQuery;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class SpanNearQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b1180807b87ba737,
              mid_addClause_17f5eb5291567d5d,
              mid_addGap_239bad5a0d549be6,
              mid_build_92e878070ffb4724,
              mid_setSlop_239bad5a0d549be6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$Builder(const SpanNearQuery$Builder& obj) : ::java::lang::Object(obj) {}

            SpanNearQuery$Builder(const ::java::lang::String &, jboolean);

            SpanNearQuery$Builder addClause(const ::org::apache::lucene::search::spans::SpanQuery &) const;
            SpanNearQuery$Builder addGap(jint) const;
            ::org::apache::lucene::search::spans::SpanNearQuery build() const;
            SpanNearQuery$Builder setSlop(jint) const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$Builder);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$Builder);

          class t_SpanNearQuery$Builder {
          public:
            PyObject_HEAD
            SpanNearQuery$Builder object;
            static PyObject *wrap_Object(const SpanNearQuery$Builder&);
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
