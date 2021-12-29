#ifndef org_apache_lucene_analysis_pattern_PatternReplaceCharFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternReplaceCharFilterFactory_H

#include "org/apache/lucene/analysis/util/CharFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
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
        namespace pattern {

          class PatternReplaceCharFilterFactory : public ::org::apache::lucene::analysis::util::CharFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_e71c53e25a234d7d,
              mid_normalize_e71c53e25a234d7d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceCharFilterFactory(const PatternReplaceCharFilterFactory& obj) : ::org::apache::lucene::analysis::util::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PatternReplaceCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternReplaceCharFilterFactory);
          extern PyTypeObject *PY_TYPE(PatternReplaceCharFilterFactory);

          class t_PatternReplaceCharFilterFactory {
          public:
            PyObject_HEAD
            PatternReplaceCharFilterFactory object;
            static PyObject *wrap_Object(const PatternReplaceCharFilterFactory&);
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
