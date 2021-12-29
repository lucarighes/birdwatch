#ifndef org_apache_lucene_search_grouping_LongRangeGroupSelector_H
#define org_apache_lucene_search_grouping_LongRangeGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LongValuesSource;
        class Scorable;
        namespace grouping {
          class SearchGroup;
          class LongRangeFactory;
          class LongRange;
          class GroupSelector$State;
        }
      }
      namespace index {
        class LeafReaderContext;
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

          class LongRangeGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_da67515506c269bd,
              mid_advanceTo_ddaa3f14f8aeda7d,
              mid_copyValue_f74d7f84353a55c5,
              mid_currentValue_f74d7f84353a55c5,
              mid_setGroups_50bc3ddc62a19f2d,
              mid_setNextReader_8747e0e89febf88d,
              mid_setScorer_57a565cc0113e133,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeGroupSelector(const LongRangeGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            LongRangeGroupSelector(const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::search::grouping::LongRangeFactory &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::search::grouping::LongRange copyValue() const;
            ::org::apache::lucene::search::grouping::LongRange currentValue() const;
            void setGroups(const ::java::util::Collection &) const;
            void setNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(LongRangeGroupSelector);
          extern PyTypeObject *PY_TYPE(LongRangeGroupSelector);

          class t_LongRangeGroupSelector {
          public:
            PyObject_HEAD
            LongRangeGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongRangeGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongRangeGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongRangeGroupSelector&, PyTypeObject *);
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
