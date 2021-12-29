#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H

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
        class Directory;
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

            class AnalyzingSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_b735cd38a317930e,
                mid_init$_60532e6811eab0d3,
                mid_init$_db56c8470b33f627,
                mid_build_bf225d6cde09eeb7,
                mid_get_02b63332574637fb,
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_getCount_2e5ae9edcb9b072f,
                mid_load_8d76187aa69e280c,
                mid_lookup_b158b62b42de2509,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_store_a9f4986a27ef0adc,
                mid_convertAutomaton_cb3855ae955106b8,
                mid_getFullPrefixPaths_c28373d5650ad826,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingSuggester(const AnalyzingSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jint EXACT_FIRST;
              static jint PRESERVE_SEP;

              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jint, jint, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
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
            extern PyType_Def PY_TYPE_DEF(AnalyzingSuggester);
            extern PyTypeObject *PY_TYPE(AnalyzingSuggester);

            class t_AnalyzingSuggester {
            public:
              PyObject_HEAD
              AnalyzingSuggester object;
              static PyObject *wrap_Object(const AnalyzingSuggester&);
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
