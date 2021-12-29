#ifndef org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H
#define org_apache_lucene_analysis_charfilter_MappingCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
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
        namespace charfilter {

          class MappingCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_e71c53e25a234d7d,
              mid_inform_b4ee53c41a5f629f,
              mid_normalize_e71c53e25a234d7d,
              mid_parseString_9bfa75c9f141b67f,
              mid_parseRules_a3f640adfca22610,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MappingCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MappingCharFilterFactory(const MappingCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            MappingCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
            ::java::io::Reader normalize(const ::java::io::Reader &) const;
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
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(MappingCharFilterFactory);
          extern PyTypeObject *PY_TYPE(MappingCharFilterFactory);

          class t_MappingCharFilterFactory {
          public:
            PyObject_HEAD
            MappingCharFilterFactory object;
            static PyObject *wrap_Object(const MappingCharFilterFactory&);
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
