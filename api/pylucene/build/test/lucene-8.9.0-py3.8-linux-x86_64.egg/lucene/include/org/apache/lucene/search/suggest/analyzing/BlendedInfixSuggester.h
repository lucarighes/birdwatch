#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"

namespace java {
  namespace util {
    class Map;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class Double;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
      }
      namespace search {
        class BooleanClause$Occur;
        namespace suggest {
          namespace analyzing {
            class BlendedInfixSuggester$BlenderType;
          }
          class Lookup$LookupResult;
        }
        class BooleanQuery;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class BlendedInfixSuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester {
             public:
              enum {
                mid_init$_b06573e2fea5d93f,
                mid_init$_177537284cd6b49f,
                mid_init$_85c067f8afeb5369,
                mid_lookup_b158b62b42de2509,
                mid_lookup_46ccd4df2ff3d83e,
                mid_lookup_e54afc1bb977fe8b,
                mid_lookup_7723ef64fb9167ab,
                mid_getTextFieldType_cc3ee11125b99c9b,
                mid_createResults_8928817123803a4e,
                mid_calculateCoefficient_f3ddedc0b6f18620,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BlendedInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BlendedInfixSuggester(const BlendedInfixSuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {}

              static jint DEFAULT_NUM_FACTOR;

              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, jboolean);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, const ::java::lang::Double &, jboolean, jboolean, jboolean);

              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
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
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(BlendedInfixSuggester);
            extern PyTypeObject *PY_TYPE(BlendedInfixSuggester);

            class t_BlendedInfixSuggester {
            public:
              PyObject_HEAD
              BlendedInfixSuggester object;
              static PyObject *wrap_Object(const BlendedInfixSuggester&);
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
