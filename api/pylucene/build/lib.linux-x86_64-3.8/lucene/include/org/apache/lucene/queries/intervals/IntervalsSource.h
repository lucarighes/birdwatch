#ifndef org_apache_lucene_queries_intervals_IntervalsSource_H
#define org_apache_lucene_queries_intervals_IntervalsSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace queries {
        namespace intervals {
          class IntervalIterator;
          class IntervalsSource;
          class IntervalMatchesIterator;
        }
      }
      namespace search {
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace queries {
        namespace intervals {

          class IntervalsSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_intervals_80ec7682f3d26944,
              mid_matches_d5980412d2357d19,
              mid_minExtent_9972fcc56b44e79d,
              mid_pullUpDisjunctions_d4dfbf7a26ff41df,
              mid_toString_db9b55ba01e03e4b,
              mid_visit_1a0587fdd01f6343,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalsSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalsSource(const IntervalsSource& obj) : ::java::lang::Object(obj) {}

            IntervalsSource();

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            jint minExtent() const;
            ::java::util::Collection pullUpDisjunctions() const;
            ::java::lang::String toString() const;
            void visit(const ::java::lang::String &, const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalsSource);
          extern PyTypeObject *PY_TYPE(IntervalsSource);

          class t_IntervalsSource {
          public:
            PyObject_HEAD
            IntervalsSource object;
            static PyObject *wrap_Object(const IntervalsSource&);
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
