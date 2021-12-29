#ifndef org_apache_lucene_queryparser_ext_ExtendableQueryParser_H
#define org_apache_lucene_queryparser_ext_ExtendableQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace queryparser {
        namespace ext {
          class Extensions;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class ExtendableQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_32cb72731c50a536,
              mid_init$_3ba24dd07c8d506c,
              mid_getExtensionFieldDelimiter_8eea1dd85c3239c3,
              mid_getFieldQuery_da5a988725940811,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtendableQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExtendableQueryParser(const ExtendableQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ExtendableQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            ExtendableQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::ext::Extensions &);

            jchar getExtensionFieldDelimiter() const;
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
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(ExtendableQueryParser);
          extern PyTypeObject *PY_TYPE(ExtendableQueryParser);

          class t_ExtendableQueryParser {
          public:
            PyObject_HEAD
            ExtendableQueryParser object;
            static PyObject *wrap_Object(const ExtendableQueryParser&);
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
