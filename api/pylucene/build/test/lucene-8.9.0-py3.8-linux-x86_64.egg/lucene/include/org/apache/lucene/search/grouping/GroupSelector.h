#ifndef org_apache_lucene_search_grouping_GroupSelector_H
#define org_apache_lucene_search_grouping_GroupSelector_H

#include "java/lang/Object.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class Scorable;
        namespace grouping {
          class SearchGroup;
          class GroupSelector$State;
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
        namespace grouping {

          class GroupSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_advanceTo_ddaa3f14f8aeda7d,
              mid_copyValue_d6bcd06f3102c4d9,
              mid_currentValue_d6bcd06f3102c4d9,
              mid_setGroups_50bc3ddc62a19f2d,
              mid_setNextReader_8747e0e89febf88d,
              mid_setScorer_57a565cc0113e133,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupSelector(const GroupSelector& obj) : ::java::lang::Object(obj) {}

            GroupSelector();

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::java::lang::Object copyValue() const;
            ::java::lang::Object currentValue() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupSelector);
          extern PyTypeObject *PY_TYPE(GroupSelector);

          class t_GroupSelector {
          public:
            PyObject_HEAD
            GroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupSelector&, PyTypeObject *);
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
