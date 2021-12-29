#ifndef org_apache_lucene_search_grouping_TermGroupSelector_H
#define org_apache_lucene_search_grouping_TermGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

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
      namespace util {
        class BytesRef;
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

          class TermGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_9fd2eb66a64e6f0f,
              mid_advanceTo_ddaa3f14f8aeda7d,
              mid_copyValue_7af2ea2e37ce82b8,
              mid_currentValue_7af2ea2e37ce82b8,
              mid_setGroups_50bc3ddc62a19f2d,
              mid_setNextReader_8747e0e89febf88d,
              mid_setScorer_57a565cc0113e133,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermGroupSelector(const TermGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            TermGroupSelector(const ::java::lang::String &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::util::BytesRef copyValue() const;
            ::org::apache::lucene::util::BytesRef currentValue() const;
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
          extern PyType_Def PY_TYPE_DEF(TermGroupSelector);
          extern PyTypeObject *PY_TYPE(TermGroupSelector);

          class t_TermGroupSelector {
          public:
            PyObject_HEAD
            TermGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TermGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TermGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TermGroupSelector&, PyTypeObject *);
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
