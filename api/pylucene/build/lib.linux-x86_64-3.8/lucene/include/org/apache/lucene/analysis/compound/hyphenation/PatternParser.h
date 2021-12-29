#ifndef org_apache_lucene_analysis_compound_hyphenation_PatternParser_H
#define org_apache_lucene_analysis_compound_hyphenation_PatternParser_H

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
          }
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
        namespace compound {
          namespace hyphenation {

            class PatternParser : public ::org::xml::sax::helpers::DefaultHandler {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_1f59f061a6ad8575,
                mid_characters_d5128be76a214037,
                mid_endElement_f05031826564616f,
                mid_parse_9fd2eb66a64e6f0f,
                mid_setConsumer_1f59f061a6ad8575,
                mid_getPattern_9bfa75c9f141b67f,
                mid_normalizeException_aab6f133523584bb,
                mid_getExceptionWord_d81fcb5f822c6a41,
                mid_getInterletterValues_9bfa75c9f141b67f,
                mid_readToken_4bbc3008cb9ba18f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PatternParser(jobject obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PatternParser(const PatternParser& obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {}

              PatternParser();
              PatternParser(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &);

              void characters(const JArray< jchar > &, jint, jint) const;
              void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
              void parse(const ::java::lang::String &) const;
              void setConsumer(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &) const;
            };
          }
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
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(PatternParser);
            extern PyTypeObject *PY_TYPE(PatternParser);

            class t_PatternParser {
            public:
              PyObject_HEAD
              PatternParser object;
              static PyObject *wrap_Object(const PatternParser&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
