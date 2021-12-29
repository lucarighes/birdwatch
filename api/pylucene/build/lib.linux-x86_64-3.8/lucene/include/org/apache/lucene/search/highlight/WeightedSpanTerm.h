#ifndef org_apache_lucene_search_highlight_WeightedSpanTerm_H
#define org_apache_lucene_search_highlight_WeightedSpanTerm_H

#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class PositionSpan;
        }
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

          class WeightedSpanTerm : public ::org::apache::lucene::search::highlight::WeightedTerm {
           public:
            enum {
              mid_init$_92b8330cd0e4f2a3,
              mid_init$_b094f5b048ebd6a7,
              mid_addPositionSpans_d03990be0130160d,
              mid_checkPosition_a1d30e1ee40c89a2,
              mid_getPositionSpans_49ec78390f08338a,
              mid_isPositionSensitive_8454bd5aa23fd11e,
              mid_setPositionSensitive_9d72768e8fdce2b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTerm(jobject obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTerm(const WeightedSpanTerm& obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {}

            WeightedSpanTerm(jfloat, const ::java::lang::String &);
            WeightedSpanTerm(jfloat, const ::java::lang::String &, jboolean);

            void addPositionSpans(const ::java::util::List &) const;
            jboolean checkPosition(jint) const;
            ::java::util::List getPositionSpans() const;
            jboolean isPositionSensitive() const;
            void setPositionSensitive(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTerm);
          extern PyTypeObject *PY_TYPE(WeightedSpanTerm);

          class t_WeightedSpanTerm {
          public:
            PyObject_HEAD
            WeightedSpanTerm object;
            static PyObject *wrap_Object(const WeightedSpanTerm&);
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
