#ifndef org_apache_lucene_search_suggest_jaspell_JaspellLookup_H
#define org_apache_lucene_search_suggest_jaspell_JaspellLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class BytesRef;
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
namespace java {
  namespace lang {
    class Class;
    class Object;
    class CharSequence;
  }
  namespace util {
    class Set;
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace jaspell {

            class JaspellLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_add_d7485052d53c5b82,
                mid_build_bf225d6cde09eeb7,
                mid_get_02b63332574637fb,
                mid_getCount_2e5ae9edcb9b072f,
                mid_load_8d76187aa69e280c,
                mid_lookup_b158b62b42de2509,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_store_a9f4986a27ef0adc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JaspellLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              JaspellLookup(const JaspellLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              JaspellLookup();

              jboolean add(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
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
          namespace jaspell {
            extern PyType_Def PY_TYPE_DEF(JaspellLookup);
            extern PyTypeObject *PY_TYPE(JaspellLookup);

            class t_JaspellLookup {
            public:
              PyObject_HEAD
              JaspellLookup object;
              static PyObject *wrap_Object(const JaspellLookup&);
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
