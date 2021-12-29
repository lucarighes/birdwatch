#ifndef org_apache_lucene_queryparser_xml_CoreParser_H
#define org_apache_lucene_queryparser_xml_CoreParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
        }
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
          namespace builders {
            class SpanQueryBuilder;
          }
          class ParserException;
        }
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
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class CoreParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d79fd8049d19a29e,
              mid_init$_32cb72731c50a536,
              mid_addQueryBuilder_af2b25e035a80d26,
              mid_addSpanBuilder_d2478634f7897389,
              mid_addSpanQueryBuilder_d2478634f7897389,
              mid_parse_92111d215ff8820e,
              mid_getErrorHandler_a7f247a550b1b419,
              mid_getEntityResolver_d8fabcfaa2d23008,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CoreParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CoreParser(const CoreParser& obj) : ::java::lang::Object(obj) {}

            CoreParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);
            CoreParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            void addQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &) const;
            void addSpanBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            void addSpanQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            ::org::apache::lucene::search::Query parse(const ::java::io::InputStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(CoreParser);
          extern PyTypeObject *PY_TYPE(CoreParser);

          class t_CoreParser {
          public:
            PyObject_HEAD
            CoreParser object;
            static PyObject *wrap_Object(const CoreParser&);
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
