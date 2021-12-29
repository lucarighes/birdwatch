#ifndef org_apache_lucene_analysis_util_CharFilterFactory_H
#define org_apache_lucene_analysis_util_CharFilterFactory_H

#include "org/apache/lucene/analysis/util/AbstractAnalysisFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharFilterFactory;
        }
      }
    }
  }
}
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
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharFilterFactory : public ::org::apache::lucene::analysis::util::AbstractAnalysisFactory {
           public:
            enum {
              mid_availableCharFilters_7dcf4034c6d1a92a,
              mid_create_e71c53e25a234d7d,
              mid_findSPIName_1d6fc28577e5ff15,
              mid_forName_645e896d48e8802c,
              mid_lookupClass_337d52b895d55b49,
              mid_normalize_e71c53e25a234d7d,
              mid_reloadCharFilters_98a876e82795b112,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharFilterFactory(const CharFilterFactory& obj) : ::org::apache::lucene::analysis::util::AbstractAnalysisFactory(obj) {}

            static ::java::util::Set availableCharFilters();
            ::java::io::Reader create(const ::java::io::Reader &) const;
            static ::java::lang::String findSPIName(const ::java::lang::Class &);
            static CharFilterFactory forName(const ::java::lang::String &, const ::java::util::Map &);
            static ::java::lang::Class lookupClass(const ::java::lang::String &);
            ::java::io::Reader normalize(const ::java::io::Reader &) const;
            static void reloadCharFilters(const ::java::lang::ClassLoader &);
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
          extern PyType_Def PY_TYPE_DEF(CharFilterFactory);
          extern PyTypeObject *PY_TYPE(CharFilterFactory);

          class t_CharFilterFactory {
          public:
            PyObject_HEAD
            CharFilterFactory object;
            static PyObject *wrap_Object(const CharFilterFactory&);
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
