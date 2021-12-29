#ifndef org_apache_lucene_queryparser_xml_CorePlusQueriesParser_H
#define org_apache_lucene_queryparser_xml_CorePlusQueriesParser_H

#include "org/apache/lucene/queryparser/xml/CoreParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParser;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class CorePlusQueriesParser : public ::org::apache::lucene::queryparser::xml::CoreParser {
           public:
            enum {
              mid_init$_d79fd8049d19a29e,
              mid_init$_32cb72731c50a536,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CorePlusQueriesParser(jobject obj) : ::org::apache::lucene::queryparser::xml::CoreParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CorePlusQueriesParser(const CorePlusQueriesParser& obj) : ::org::apache::lucene::queryparser::xml::CoreParser(obj) {}

            CorePlusQueriesParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);
            CorePlusQueriesParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
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
      namespace queryparser {
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(CorePlusQueriesParser);
          extern PyTypeObject *PY_TYPE(CorePlusQueriesParser);

          class t_CorePlusQueriesParser {
          public:
            PyObject_HEAD
            CorePlusQueriesParser object;
            static PyObject *wrap_Object(const CorePlusQueriesParser&);
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
