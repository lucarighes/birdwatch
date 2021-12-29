#ifndef org_apache_lucene_search_grouping_AllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_AllGroupHeadsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class AllGroupHeadsCollector;
          class GroupSelector;
        }
        class Scorable;
        class Sort;
        class ScoreMode;
      }
      namespace util {
        class FixedBitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace search {
        namespace grouping {

          class AllGroupHeadsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_collect_040c4cd0390c5aff,
              mid_groupHeadsSize_9972fcc56b44e79d,
              mid_newCollector_004bf68e76751d00,
              mid_retrieveGroupHeads_d2c45ef07a322466,
              mid_retrieveGroupHeads_8a4ea7ed4cff6942,
              mid_scoreMode_8a35254b82ee8276,
              mid_setScorer_57a565cc0113e133,
              mid_doSetNextReader_8747e0e89febf88d,
              mid_getCollectedGroupHeads_d4dfbf7a26ff41df,
              mid_newGroupHead_592fb517c001b35b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupHeadsCollector(const AllGroupHeadsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            void collect(jint) const;
            jint groupHeadsSize() const;
            static AllGroupHeadsCollector newCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &);
            JArray< jint > retrieveGroupHeads() const;
            ::org::apache::lucene::util::FixedBitSet retrieveGroupHeads(jint) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(AllGroupHeadsCollector);
          extern PyTypeObject *PY_TYPE(AllGroupHeadsCollector);

          class t_AllGroupHeadsCollector {
          public:
            PyObject_HEAD
            AllGroupHeadsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupHeadsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupHeadsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupHeadsCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
