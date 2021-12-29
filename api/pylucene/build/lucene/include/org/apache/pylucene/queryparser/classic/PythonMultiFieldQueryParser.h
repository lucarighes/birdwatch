#ifndef org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H
#define org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {

          class PythonMultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser {
           public:
            enum {
              mid_init$_b575256d5b8b6872,
              mid_finalize_f2cc1bce94666404,
              mid_getBooleanQuery_f5d003a5f0f6b381,
              mid_getFieldQuery_da5a988725940811,
              mid_getFieldQuery_3a5baa20d223c529,
              mid_getFieldQuery_quoted_da5a988725940811,
              mid_getFieldQuery_quoted_super_da5a988725940811,
              mid_getFieldQuery_slop_3a5baa20d223c529,
              mid_getFieldQuery_slop_super_3a5baa20d223c529,
              mid_getFuzzyQuery_391b6230ae9c102d,
              mid_getPrefixQuery_e08cfaa30c1cfbe9,
              mid_getRangeQuery_ee01989124e5cf67,
              mid_getWildcardQuery_e08cfaa30c1cfbe9,
              mid_pythonDecRef_f2cc1bce94666404,
              mid_pythonExtension_2e5ae9edcb9b072f,
              mid_pythonExtension_9c778c9bce6694df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMultiFieldQueryParser(const PythonMultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {}

            PythonMultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);

            void finalize() const;
            ::org::apache::lucene::search::Query getBooleanQuery(const ::java::util::List &) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted_super(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop_super(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFuzzyQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
            ::org::apache::lucene::search::Query getPrefixQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query getRangeQuery(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::search::Query getWildcardQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(PythonMultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(PythonMultiFieldQueryParser);

          class t_PythonMultiFieldQueryParser {
          public:
            PyObject_HEAD
            PythonMultiFieldQueryParser object;
            static PyObject *wrap_Object(const PythonMultiFieldQueryParser&);
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
