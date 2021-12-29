#ifndef org_apache_lucene_analysis_util_AnalysisSPILoader_H
#define org_apache_lucene_analysis_util_AnalysisSPILoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class AbstractAnalysisFactory;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class AnalysisSPILoader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_67ec072891501dcc,
              mid_init$_64d17552adaf626e,
              mid_init$_618fea55b5be1e12,
              mid_availableServices_7dcf4034c6d1a92a,
              mid_lookupClass_337d52b895d55b49,
              mid_newFactoryClassInstance_963f1a166b8683c2,
              mid_newInstance_a20ba46eadc0fa80,
              mid_reload_98a876e82795b112,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AnalysisSPILoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AnalysisSPILoader(const AnalysisSPILoader& obj) : ::java::lang::Object(obj) {}

            AnalysisSPILoader(const ::java::lang::Class &);
            AnalysisSPILoader(const ::java::lang::Class &, const JArray< ::java::lang::String > &);
            AnalysisSPILoader(const ::java::lang::Class &, const JArray< ::java::lang::String > &, const ::java::lang::ClassLoader &);

            ::java::util::Set availableServices() const;
            ::java::lang::Class lookupClass(const ::java::lang::String &) const;
            static ::org::apache::lucene::analysis::util::AbstractAnalysisFactory newFactoryClassInstance(const ::java::lang::Class &, const ::java::util::Map &);
            ::org::apache::lucene::analysis::util::AbstractAnalysisFactory newInstance(const ::java::lang::String &, const ::java::util::Map &) const;
            void reload(const ::java::lang::ClassLoader &) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(AnalysisSPILoader);
          extern PyTypeObject *PY_TYPE(AnalysisSPILoader);

          class t_AnalysisSPILoader {
          public:
            PyObject_HEAD
            AnalysisSPILoader object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AnalysisSPILoader *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AnalysisSPILoader&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AnalysisSPILoader&, PyTypeObject *);
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
