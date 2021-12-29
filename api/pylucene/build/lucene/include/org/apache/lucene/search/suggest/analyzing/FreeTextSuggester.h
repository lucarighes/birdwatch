#ifndef org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H
#define org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
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

            class FreeTextSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_651b708fb3f85e6e,
                mid_init$_d11940d5eb406acf,
                mid_init$_81369a72b59154b3,
                mid_init$_738f394037f9c730,
                mid_build_bf225d6cde09eeb7,
                mid_build_2038cc777ee05573,
                mid_get_02b63332574637fb,
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_getCount_2e5ae9edcb9b072f,
                mid_load_8d76187aa69e280c,
                mid_lookup_32d21569108f6276,
                mid_lookup_615e71ef0df182df,
                mid_lookup_d9d9bcb887ddf88e,
                mid_lookup_b158b62b42de2509,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_store_a9f4986a27ef0adc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FreeTextSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FreeTextSuggester(const FreeTextSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jdouble ALPHA;
              static ::java::lang::String *CODEC_NAME;
              static jint DEFAULT_GRAMS;
              static jbyte DEFAULT_SEPARATOR;
              static jint VERSION_CURRENT;
              static jint VERSION_START;

              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jbyte);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &, jdouble) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
            extern PyType_Def PY_TYPE_DEF(FreeTextSuggester);
            extern PyTypeObject *PY_TYPE(FreeTextSuggester);

            class t_FreeTextSuggester {
            public:
              PyObject_HEAD
              FreeTextSuggester object;
              static PyObject *wrap_Object(const FreeTextSuggester&);
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
