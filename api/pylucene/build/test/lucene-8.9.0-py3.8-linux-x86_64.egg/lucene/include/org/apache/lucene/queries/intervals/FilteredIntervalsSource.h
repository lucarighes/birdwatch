#ifndef org_apache_lucene_queries_intervals_FilteredIntervalsSource_H
#define org_apache_lucene_queries_intervals_FilteredIntervalsSource_H

#include "org/apache/lucene/queries/intervals/IntervalsSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace queries {
        namespace intervals {
          class IntervalIterator;
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
    class Object;
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

          class FilteredIntervalsSource : public ::org::apache::lucene::queries::intervals::IntervalsSource {
           public:
            enum {
              mid_init$_1e32a8f89fb4c908,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_intervals_80ec7682f3d26944,
              mid_matches_d5980412d2357d19,
              mid_maxGaps_b5cbca4ec9a8c75a,
              mid_maxWidth_b5cbca4ec9a8c75a,
              mid_minExtent_9972fcc56b44e79d,
              mid_pullUpDisjunctions_d4dfbf7a26ff41df,
              mid_toString_db9b55ba01e03e4b,
              mid_visit_1a0587fdd01f6343,
              mid_accept_c612da1f7e163206,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilteredIntervalsSource(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilteredIntervalsSource(const FilteredIntervalsSource& obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {}

            FilteredIntervalsSource(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxGaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxWidth(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
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
          extern PyType_Def PY_TYPE_DEF(FilteredIntervalsSource);
          extern PyTypeObject *PY_TYPE(FilteredIntervalsSource);

          class t_FilteredIntervalsSource {
          public:
            PyObject_HEAD
            FilteredIntervalsSource object;
            static PyObject *wrap_Object(const FilteredIntervalsSource&);
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
