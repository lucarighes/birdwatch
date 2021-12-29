#ifndef org_apache_lucene_facet_DrillSideways$ConcurrentDrillSidewaysResult_H
#define org_apache_lucene_facet_DrillSideways$ConcurrentDrillSidewaysResult_H

#include "org/apache/lucene/facet/DrillSideways$DrillSidewaysResult.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillSideways$ConcurrentDrillSidewaysResult : public ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult {
         public:

          enum {
            fid_collectorResult,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways$ConcurrentDrillSidewaysResult(jobject obj) : ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways$ConcurrentDrillSidewaysResult(const DrillSideways$ConcurrentDrillSidewaysResult& obj) : ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult(obj) {}

          ::java::lang::Object _get_collectorResult() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(DrillSideways$ConcurrentDrillSidewaysResult);
        extern PyTypeObject *PY_TYPE(DrillSideways$ConcurrentDrillSidewaysResult);

        class t_DrillSideways$ConcurrentDrillSidewaysResult {
        public:
          PyObject_HEAD
          DrillSideways$ConcurrentDrillSidewaysResult object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DrillSideways$ConcurrentDrillSidewaysResult *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DrillSideways$ConcurrentDrillSidewaysResult&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DrillSideways$ConcurrentDrillSidewaysResult&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
