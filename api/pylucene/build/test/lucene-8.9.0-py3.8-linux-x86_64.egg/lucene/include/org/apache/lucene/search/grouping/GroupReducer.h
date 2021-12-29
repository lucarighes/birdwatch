#ifndef org_apache_lucene_search_grouping_GroupReducer_H
#define org_apache_lucene_search_grouping_GroupReducer_H

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
        }
        class Collector;
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

          class GroupReducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_collect_7290374200b677dd,
              mid_getCollector_2d94a26e18c3a6e4,
              mid_needsScores_8454bd5aa23fd11e,
              mid_setGroups_50bc3ddc62a19f2d,
              mid_setNextReader_8747e0e89febf88d,
              mid_setScorer_57a565cc0113e133,
              mid_newCollector_3c6c359421e4bebc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupReducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupReducer(const GroupReducer& obj) : ::java::lang::Object(obj) {}

            GroupReducer();

            void collect(const ::java::lang::Object &, jint) const;
            ::org::apache::lucene::search::Collector getCollector(const ::java::lang::Object &) const;
            jboolean needsScores() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupReducer);
          extern PyTypeObject *PY_TYPE(GroupReducer);

          class t_GroupReducer {
          public:
            PyObject_HEAD
            GroupReducer object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_GroupReducer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupReducer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupReducer&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
